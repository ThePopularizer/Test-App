//
//  TestDetailViewController.h
//  Test App
//
//  Created by Tim Fu Watanabe on 4/11/13.
//  Copyright (c) 2013 Tim Fu Watanabe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TestDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
