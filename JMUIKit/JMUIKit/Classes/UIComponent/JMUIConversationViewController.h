//
//  JMUIConversationViewController.h
//  JMUIKit
//
//  Created by oshumini on 15/12/28.
//  Copyright © 2015年 HXHG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JMUIInputToolbar.h"
#import "JMUIMoreView.h"
#import "JMUIInputView.h"
#import <JMessage/JMessage.h>

@interface JMUIConversationViewController : UIViewController<
UITableViewDataSource,
UITableViewDelegate,
JMUIToolBarDelegate,
JMUIMoreViewDelegate,
JMessageDelegate
>
@property (strong, nonatomic)JMSGConversation *conversation;
@property (weak, nonatomic) IBOutlet JMUIInputView *inputView;
@property (weak, nonatomic) IBOutlet UITableView *messageListTable;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *inputViewToBottom;

@end
