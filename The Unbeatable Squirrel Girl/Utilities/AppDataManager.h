//
//  AppDataManager.h
//  The Unbeatable Squirrel Girl
//
//  Created by Harshita on 04/11/15.
//
//

@import Foundation;

extern NSString * const MarvelCharacterKeySquirrelGirl;

@interface AppDataManager : NSObject

+ (AppDataManager *)sharedManager;
- (void)fetchSeries;

@end
