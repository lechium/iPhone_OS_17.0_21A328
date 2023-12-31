//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString;
@protocol TabBarDropExpansionViewDelegate;

__attribute__((visibility("hidden")))
@interface TabBarDropExpansionView : UIView
{
    id <TabBarDropExpansionViewDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000105339
@property(nonatomic) __weak id <TabBarDropExpansionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;	// IMP=0x0000000000105301
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;	// IMP=0x0000000000105290
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;	// IMP=0x000000000010521f
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;	// IMP=0x0000000000105203
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000105175
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001050f3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001050c4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000104ffd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

