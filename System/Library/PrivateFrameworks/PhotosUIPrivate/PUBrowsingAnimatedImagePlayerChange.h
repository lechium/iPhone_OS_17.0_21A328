//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUViewModelChange.h"

__attribute__((visibility("hidden")))
@interface PUBrowsingAnimatedImagePlayerChange : PUViewModelChange
{
    _Bool _animatedImageDidChange;	// 8 = 0x8
    _Bool _animatedImageLoadingAllowedDidChange;	// 9 = 0x9
}

@property(nonatomic, setter=_setAnimatedImageLoadingAllowedDidChange:) _Bool animatedImageLoadingAllowedDidChange; // @synthesize animatedImageLoadingAllowedDidChange=_animatedImageLoadingAllowedDidChange;
@property(nonatomic, setter=_setAnimatedImageDidChange:) _Bool animatedImageDidChange; // @synthesize animatedImageDidChange=_animatedImageDidChange;
- (_Bool)hasChanges;	// IMP=0x0000000000199585

@end
