//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor, UIHoverStyle, _UIContextMenuCellContentView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuLargePaletteCellLayout : NSObject
{
    _UIContextMenuCellContentView *_contentView;	// 8 = 0x8
    NSArray *_managedConstraints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a6d477
@property(retain, nonatomic) NSArray *managedConstraints; // @synthesize managedConstraints=_managedConstraints;
@property(nonatomic) __weak _UIContextMenuCellContentView *contentView; // @synthesize contentView=_contentView;
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000a6d42f
- (void)removeConstraints;	// IMP=0x0000000000a6d3c8
- (void)updateConstraints;	// IMP=0x0000000000a6d3c2
- (void)installConstraints;	// IMP=0x0000000000a6ccd7
@property(readonly, nonatomic) long long focusStyle;
@property(readonly, nonatomic) UIHoverStyle *hoverStyle;
@property(readonly, nonatomic) UIColor *preferredBackgroundColorForCurrentState;
@property(readonly, nonatomic) UIColor *preferredContentColorForCurrentState;
- (id)preferredIconFontUsingBoldFont:(_Bool)arg1;	// IMP=0x0000000000a6cbdb
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets backgroundViewInsets;
@property(readonly, nonatomic) unsigned long long labelMaximumNumberOfLines;
@property(readonly, nonatomic) long long labelTextAlignment;
@property(readonly, nonatomic) long long layoutSize;
- (id)initWithContentView:(id)arg1;	// IMP=0x0000000000a6caf9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

