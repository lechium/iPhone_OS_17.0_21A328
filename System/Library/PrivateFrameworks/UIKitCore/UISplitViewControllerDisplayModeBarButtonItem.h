//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIBarButtonItem.h"

@protocol UISplitViewControllerImpl;

__attribute__((visibility("hidden")))
@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem
{
    _Bool _hasBeenUsed;	// 8 = 0x8
    id <UISplitViewControllerImpl> _impl;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005b94c7
@property(readonly, nonatomic, getter=_hasBeenUsed) _Bool hasBeenUsed; // @synthesize hasBeenUsed=_hasBeenUsed;
@property(nonatomic, getter=_impl, setter=_setImpl:) __weak id <UISplitViewControllerImpl> impl; // @synthesize impl=_impl;
- (void)_wasUsed;	// IMP=0x00000000005b9422
- (SEL)action;	// IMP=0x00000000005b93e4
- (id)target;	// IMP=0x00000000005b9397
- (void)_setOwningNavigationItem:(id)arg1;	// IMP=0x00000000005b9305

@end

