//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueProperty, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueComputedProperty
{
    NSString *_operationName;	// 24 = 0x18
    NSString *_operationArgumentKeyPath;	// 32 = 0x20
    NSKeyValueProperty *_operationArgumentProperty;	// 40 = 0x28
}

- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;	// IMP=0x000000000069e81d
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;	// IMP=0x000000000069e800
- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;	// IMP=0x000000000069e7e3
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x000000000069e7c6
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x000000000069e7a9
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;	// IMP=0x000000000069e774
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;	// IMP=0x000000000069e734
- (Class)_isaForAutonotifying;	// IMP=0x000000000069e717
- (void)_addDependentValueKey:(id)arg1;	// IMP=0x000000000069e6fa
- (void)_givenPropertiesBeingInitialized:(struct __CFSet *)arg1 getAffectingProperties:(id)arg2;	// IMP=0x000000000069e6dd
- (id)description;	// IMP=0x000000000069e67c
- (void)dealloc;	// IMP=0x000000000069e5f3
- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;	// IMP=0x000000000069e4b1

@end

