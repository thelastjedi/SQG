//
//  DetailViewController.h
//  The Unbeatable Squirrel Girl
//
//  Created by Harshita on 16/09/15.
//  Copyright © 2015 HC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

