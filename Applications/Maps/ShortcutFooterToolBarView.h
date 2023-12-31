//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol ShortcutActionTypeDelegate;

@interface ShortcutFooterToolBarView
{
}

- (void)editListShortcutAction:(id)arg1;	// IMP=0x0020000000186e27
- (void)cancelListShortcutAction:(id)arg1;	// IMP=0x0010000000186dd6
- (void)newShortcutAction:(id)arg1;	// IMP=0x0010000000186d85
- (void)loadListShortcutEditActions;	// IMP=0x0010000000186c78
- (void)loadListShortcutActions;	// IMP=0x0010000000186b3d
- (void)_updateContent;	// IMP=0x0010000000186ab3

// Remaining properties
@property(nonatomic) __weak id <ShortcutActionTypeDelegate> delegate; // @dynamic delegate;

@end

