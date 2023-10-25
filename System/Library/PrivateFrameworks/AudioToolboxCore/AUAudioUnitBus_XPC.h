//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AUAudioUnitBus.h"

@class AUAudioUnit_XPC, AVAudioFormat, NSArray, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface AUAudioUnitBus_XPC : AUAudioUnitBus
{
    AUAudioUnit_XPC *_audioUnit;	// 8 = 0x8
    NSXPCConnection *_remoteAUXPCConnection;	// 16 = 0x10
    unsigned int _scope;	// 24 = 0x18
    unsigned int _element;	// 28 = 0x1c
    AVAudioFormat *_format;	// 32 = 0x20
    NSArray *_supportedChannelLayoutTags;	// 40 = 0x28
    _Bool _removingObserverWithContext;	// 48 = 0x30
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0010000000120ce1
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000120cd9
- (void).cxx_destruct;	// IMP=0x000000000011ffa1
- (id)format;	// IMP=0x000000000011ff8c
- (void)propertyChanged:(id)arg1;	// IMP=0x000000000011ff2d
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000011fe16
- (_Bool)isEnabled;	// IMP=0x000000000011fd13
- (_Bool)setFormat:(id)arg1 error:(id *)arg2;	// IMP=0x000000000011fa49
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000011f790
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x000000000011f4a5
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x000000000011f208
- (void)dealloc;	// IMP=0x000000000011f1d9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011ef2e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011ee68

@end
