//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSKeyValueContainerClass, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueProperty : NSObject
{
    NSKeyValueContainerClass *_containerClass;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
}

- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;	// IMP=0x000000000069c303
- (id)restOfKeyPathIfContainedByValueForKeyPath:(id)arg1;	// IMP=0x000000000069c236
- (id)dependentValueKeyOrKeysIsASet:(_Bool *)arg1;	// IMP=0x000000000069c22e
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;	// IMP=0x000000000069c228
- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;	// IMP=0x000000000069c216
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x000000000069c210
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x000000000069c20a
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;	// IMP=0x000000000069c1f8
- (id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;	// IMP=0x000000000069c1e6
- (Class)isaForAutonotifying;	// IMP=0x000000000069c1d4
- (id)keyPath;	// IMP=0x000000000069c1ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000069c1bf
- (void)dealloc;	// IMP=0x000000000069c152
- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;	// IMP=0x000000000069c0b2

@end

