//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIView;

@interface MapsBannerContent : NSObject
{
    UIView *_headerView;	// 8 = 0x8
    UIView *_iconView;	// 16 = 0x10
    UIView *_leadingTopView;	// 24 = 0x18
    UIView *_trailingTopView;	// 32 = 0x20
    UIView *_bottomView;	// 40 = 0x28
    UIView *_footerView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000003624b9
@property(readonly, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(readonly, nonatomic) UIView *trailingTopView; // @synthesize trailingTopView=_trailingTopView;
@property(readonly, nonatomic) UIView *leadingTopView; // @synthesize leadingTopView=_leadingTopView;
@property(readonly, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) NSObject *visibilityFingerprint;
@property(readonly, nonatomic) NSArray *allViews;
- (id)initWithHeaderView:(id)arg1 iconView:(id)arg2 leadingTopView:(id)arg3 trailingTopView:(id)arg4 bottomView:(id)arg5 footerView:(id)arg6;	// IMP=0x0010000000362094

@end

