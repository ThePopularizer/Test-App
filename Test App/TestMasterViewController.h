//
//  TestMasterViewController.h
//  Test App
//
//  Created by Tim Fu Watanabe on 4/11/13.
//  Copyright (c) 2013 Tim Fu Watanabe. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TestDetailViewController;

@interface TestMasterViewController : UITableViewController

@property (strong, nonatomic) TestDetailViewController *detailViewController;

@end
