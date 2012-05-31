//
//  DetailViewController.h
//  TableViewTest
//
//  Created by Alain Joliveau on 31/05/12.
//  Copyright (c) 2012 Alike-Group. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
- (IBAction)didTouchLogicalDeletion:(id)sender;

@end
