//
//  DetailViewController.h
//  hello
//
//  Created by Noman on 10/19/15.
//  Copyright © 2015 Noman Khan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

