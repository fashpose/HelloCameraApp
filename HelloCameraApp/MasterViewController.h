//
//  MasterViewController.h
//  HelloCameraApp
//
//  Created by Rajendran, Ashwath on 12/20/12.
//  Copyright (c) 2012 Rajendran, Ashwath. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
