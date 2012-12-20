//
//  DetailViewController.h
//  HelloCameraApp
//
//  Created by Rajendran, Ashwath on 12/20/12.
//  Copyright (c) 2012 Rajendran, Ashwath. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
