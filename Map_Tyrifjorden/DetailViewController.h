//
//  DetailViewController.h
//  Map_Tyrifjorden
//
//  Created by Gjermund Røsholt on 08.05.13.
//  Copyright (c) 2013 Gjermund Røsholt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
