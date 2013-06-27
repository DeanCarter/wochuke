//
//  MainViewController.h
//  Wochuke
//
//  Created by he songhang on 13-6-27.
//  Copyright (c) 2013年 he songhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainViewController : UIViewController

@property(nonatomic,retain) IBOutlet UIView *toolBar;

@property (retain, nonatomic) IBOutlet UIButton *btn_type;

@property (retain, nonatomic) IBOutlet UIButton *btn_catory;

@property (retain, nonatomic) IBOutlet UIButton *btn_search;

@property (retain, nonatomic) IBOutlet UIButton *btn_mine;

-(IBAction)showControllerView:(id)sender;

- (IBAction)typeAction:(id)sender;

- (IBAction)catoryAction:(id)sender;

- (IBAction)searchAction:(id)sender;

- (IBAction)mineAction:(id)sender;

@end
