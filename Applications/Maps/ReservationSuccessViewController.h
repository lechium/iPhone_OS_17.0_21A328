//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, UIButton, UILabel;

@interface ReservationSuccessViewController : UIViewController
{
    UILabel *_mainLabel;	// 8 = 0x8
    UILabel *_subLabel;	// 16 = 0x10
    UIButton *_editButton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000097cdc4
@property(readonly, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(readonly, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(readonly, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(copy, nonatomic) NSString *subText;
@property(copy, nonatomic) NSString *mainText;
- (void)viewDidLoad;	// IMP=0x001000000097c1c7

@end

