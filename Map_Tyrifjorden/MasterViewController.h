//
//  MasterViewController.h
//  Map_Tyrifjorden
//
//  Created by Gjermund Røsholt on 08.05.13.
//  Copyright (c) 2013 Gjermund Røsholt. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
