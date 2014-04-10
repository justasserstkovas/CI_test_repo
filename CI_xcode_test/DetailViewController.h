//
//  DetailViewController.h
//  CI_xcode_test
//
//  Created by Justas Serstkovas on 03/04/2014.
//  Copyright (c) 2014 anmedia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
