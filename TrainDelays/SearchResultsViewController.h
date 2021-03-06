//
//  SearchResultsViewController.h
//  TrainDelays
//
//  Created by Michael Pritchard on 27/02/2014.
//  Copyright (c) 2014 Michael Pritchard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SearchResultsViewController : UITableViewController

@property (strong, nonatomic)           NSString *fromStationCRS;
@property (strong, nonatomic)           NSString *toStationCRS;
@property (strong, nonatomic)           NSDate *searchTime;

@end
