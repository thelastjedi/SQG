//
//  AppDataManager.m
//  The Unbeatable Squirrel Girl
//
//  Created by Harshita on 04/11/15.
//
//

#import "AppDataManager.h"
#import <Marvelous/RCMarvelAPI.h>

NSString * const MarvelCharacterKeySquirrelGirl = @"1010860";

@interface AppDataManager()

@end

NSDictionary *marvelKeys;

@implementation AppDataManager

+ (AppDataManager *)sharedManager {
    static AppDataManager *sharedMyManager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedMyManager = [[self alloc] init];
        [sharedMyManager setupMarvelKeys];
    });
    return sharedMyManager;
}

- (void)setupMarvelKeys {
    NSString *plistPath = [[[NSBundle mainBundle] bundlePath]
                           stringByAppendingPathComponent:@"Keys.plist"];
    marvelKeys = [NSDictionary dictionaryWithContentsOfFile:plistPath];
    [RCMarvelAPI api].publicKey  = marvelKeys[@"PUBLIC_KEY"];
    [RCMarvelAPI api].privateKey = marvelKeys[@"PRIVATE_KEY"];
}


#pragma mark - 

- (void)fetchSeries {

    //Check local db
    //else, @selector(fetchSeriesFromServer)
    
}

- (void)fetchSeriesFromServer {
    
    NSNumber *identifier = [self sqCharacterIdentifier];

    RCSeriesFilter * filter = [[RCSeriesFilter alloc] init];
    filter.orderBy = @[@(RCOrderByTypeCodeNameAscending)];
    
    [[RCMarvelAPI api] seriesByCharacterIdentifier:identifier filter:filter andCallbackBlock:^(NSArray *results, RCQueryInfoObject *info, NSError *error) {
        NSLog(@"ERROR: %@", error);
        NSLog(@"QUERY INFO: %@", info);
        NSLog(@"RESULT: %@", results);
    }];
}

#pragma mark - 

- (NSNumber *)sqCharacterIdentifier {
    return [NSNumber numberWithInteger:MarvelCharacterKeySquirrelGirl.integerValue];
}

@end
