//
//  DisplayTableViewController.h
//  XMLParsingDemo
//
//  Created by Jason-Lostwolf on 16/3/14.
//  Copyright (c) 2016年 Jason-Lostwolf. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DisplayTableViewController : UITableViewController<NSXMLParserDelegate>

@property (nonatomic,strong) NSMutableDictionary *dictData;
@property (nonatomic,strong) NSMutableArray *marrXMLData;
@property (nonatomic,strong) NSMutableString *mstrXMLString;
@property (nonatomic,strong) NSMutableDictionary *mdictXMLPart;

@end
