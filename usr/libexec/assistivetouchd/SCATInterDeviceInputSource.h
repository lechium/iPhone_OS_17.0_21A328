//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;
@protocol SCATInterDeviceInputSourceDelegate;

@interface SCATInterDeviceInputSource
{
    CDUnknownBlockType _inputDeviceHandledAction;	// 8 = 0x8
    NSDictionary *_actionIdentifiersToRecipeMappingIndices;	// 16 = 0x10
    NSDictionary *;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000b6b10
@property(retain, nonatomic) NSDictionary *longPressActionIdentifiersToRecipeMappingIndices; // @synthesize longPressActionIdentifiersToRecipeMappingIndices=_longPressActionIdentifiersToRecipeMappingIndices;
@property(retain, nonatomic) NSDictionary *actionIdentifiersToRecipeMappingIndices; // @synthesize actionIdentifiersToRecipeMappingIndices=_actionIdentifiersToRecipeMappingIndices;
@property(copy, nonatomic) CDUnknownBlockType inputDeviceHandledAction; // @synthesize inputDeviceHandledAction=_inputDeviceHandledAction;
- (void)_didReceiveActionWithIdentifier:(long long)arg1 start:(_Bool)arg2 ignoreInputHold:(_Bool)arg3;	// IMP=0x00100000000b697c
- (void)handleReceivedSwitchEvent:(id)arg1 deviceName:(id)arg2;	// IMP=0x00100000000b6530
- (id)_resolveSwitchForSwitchEvent:(id)arg1 deviceName:(id)arg2;	// IMP=0x00100000000b5efb
- (void)_getActionIdentifier:(long long *)arg1 longPressActionIdentifier:(long long *)arg2 forSwitchEvent:(id)arg3;	// IMP=0x00100000000b5c30
- (void)updateWithSwitches:(id)arg1 recipe:(id)arg2;	// IMP=0x00100000000b593c
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000b590d

// Remaining properties
@property(nonatomic) __weak id <SCATInterDeviceInputSourceDelegate> delegate; // @dynamic delegate;

@end
