//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray, UIViewController;
@protocol PHAirPlayControllerContentProvider;

__attribute__((visibility("hidden")))
@interface PUAirPlayContentRegistry : NSObject
{
    id <PHAirPlayControllerContentProvider> _currentContentProvider;	// 8 = 0x8
    NSPointerArray *__contentProviders;	// 16 = 0x10
    UIViewController *__cachedCurrentContent;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001295e9
@property(retain, nonatomic, setter=_setCachedCurrentContent:) UIViewController *_cachedCurrentContent; // @synthesize _cachedCurrentContent=__cachedCurrentContent;
@property(retain, nonatomic, setter=_setContentProviders:) NSPointerArray *_contentProviders; // @synthesize _contentProviders=__contentProviders;
@property(nonatomic, setter=_setCurrentContentProvider:) id <PHAirPlayControllerContentProvider> currentContentProvider; // @synthesize currentContentProvider=_currentContentProvider;
- (void)clearContent;	// IMP=0x000000000012958b
- (id)contentForController:(id)arg1;	// IMP=0x00000000001294dc
- (void)_updateCurrentContentProvider;	// IMP=0x00000000001293e0
- (void)_invalidateCurrentContent;	// IMP=0x00000000001293cc
- (unsigned long long)_indexOfContentProvider:(id)arg1;	// IMP=0x00000000001292ee
- (void)removeContentProvider:(id)arg1;	// IMP=0x0000000000129217
- (void)addContentProvider:(id)arg1;	// IMP=0x0000000000129178
- (id)init;	// IMP=0x00000000001290f8

@end

