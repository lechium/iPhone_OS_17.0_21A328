//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIContextMenuInteraction;
@protocol AVControlOverflowButtonDelegate;

__attribute__((visibility("hidden")))
@interface AVControlOverflowButton
{
    UIContextMenuInteraction *_activeMenuInteraction;	// 8 = 0x8
    id <AVControlOverflowButtonDelegate> _delegate;	// 16 = 0x10
}

+ (id)secondGenerationButton;	// IMP=0x006000000014caa6
+ (id)firstGenerationButton;	// IMP=0x006000000014ca1d
- (void).cxx_destruct;	// IMP=0x000000000014c607
@property(nonatomic) __weak id <AVControlOverflowButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x000000000014c53a
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000014c410
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000014c34b
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000014c271
- (void)updateContextMenu;	// IMP=0x000000000014bfcf

@end

