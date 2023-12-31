//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSSimpleAssertion, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface _UISystemInputActivityManager : NSObject
{
    UIScene *_scene;	// 8 = 0x8
    BSSimpleAssertion *__activeSystemInputInteraction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000130397f
@property(nonatomic) __weak BSSimpleAssertion *_activeSystemInputInteraction; // @synthesize _activeSystemInputInteraction=__activeSystemInputInteraction;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (void)_updateClientSettingsSystemInputActive:(_Bool)arg1;	// IMP=0x000000000130383a
- (id)windowHostingScene;	// IMP=0x0000000001303824
- (id)beginTrackingSystemInputActivity;	// IMP=0x00000000013036b4
- (id)initWithScene:(id)arg1;	// IMP=0x0000000001303650

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

