//
//  MasterViewController.h
//  CI_xcode_test
//
//  Created by Justas Serstkovas on 03/04/2014.
//  Copyright (c) 2014 anmedia. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
