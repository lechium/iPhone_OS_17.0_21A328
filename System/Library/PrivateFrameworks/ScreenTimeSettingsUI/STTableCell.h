//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class NSArray, NSMutableArray, UILayoutGuide, UIViewController;

__attribute__((visibility("hidden")))
@interface STTableCell : PSTableCell
{
    UILayoutGuide *_contentLayoutGuide;	// 120 = 0x78
    NSMutableArray *_childViewControllers;	// 128 = 0x80
    UIViewController *_parentViewController;	// 136 = 0x88
    NSArray *_rtlContentLayoutGuideConstraints;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000000a3748
@property(copy, nonatomic) NSArray *rtlContentLayoutGuideConstraints; // @synthesize rtlContentLayoutGuideConstraints=_rtlContentLayoutGuideConstraints;
@property __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(readonly) NSMutableArray *childViewControllers; // @synthesize childViewControllers=_childViewControllers;
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x00000000000a338b
- (_Bool)canReload;	// IMP=0x00000000000a3383
- (void)layoutSubviews;	// IMP=0x00000000000a32bb
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x00000000000a29f0

@end
