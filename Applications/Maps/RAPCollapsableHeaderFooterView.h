//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton;

@interface RAPCollapsableHeaderFooterView
{
    UIButton *_showAllButton;	// 48 = 0x30
}

+ (void)toggleCollapseForTableView:(id)arg1 AtSection:(long long)arg2 withSelectedValue:(id)arg3 withSelectedIndex:(long long)arg4 withAllValues:(id)arg5;	// IMP=0x0040000000725540
- (void).cxx_destruct;	// IMP=0x0020000000725823
- (void)setShowAllButtonVisible:(_Bool)arg1;	// IMP=0x0010000000725479
- (void)setTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00100000007252d2
- (void)layoutSubviews;	// IMP=0x0010000000725233
- (id)_initialConstraints;	// IMP=0x0010000000724f68
- (void)_createSubviews;	// IMP=0x0010000000724dbc

@end

