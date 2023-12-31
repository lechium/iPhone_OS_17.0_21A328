//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIMenu;
@protocol MUDynamicButtonCellModelChangeDelegate;

@interface FooterContaineeAction
{
    CDUnknownBlockType _actionBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000006f5af9
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) long long actionStyle;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) NSString *symbolName;
- (id)accessibilityIdentifierForAction;	// IMP=0x00100000006f5a8c
- (void)loadSubtitleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000006f5a71
@property(readonly, nonatomic) NSString *titleString;

// Remaining properties
@property(nonatomic) __weak id <MUDynamicButtonCellModelChangeDelegate> changeDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) UIMenu *menu;
@property(readonly) Class superclass;

@end

