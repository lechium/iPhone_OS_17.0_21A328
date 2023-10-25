//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewService.h>

@class NSUUID, _EXExtensionProcessHandle;

__attribute__((visibility("hidden")))
@interface _EXRemoteViewService : _UIRemoteViewService
{
    NSUUID *_contextToken;	// 8 = 0x8
    _EXExtensionProcessHandle *_extensionProcess;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b800
@property(readonly) _EXExtensionProcessHandle *extensionProcess; // @synthesize extensionProcess=_extensionProcess;
- (id)contextToken;	// IMP=0x000000000000b7d9
- (void)endUsing:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b7c9
- (void)beginUsing:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b7b9
- (id)viewControllerClassName;	// IMP=0x000000000000b7a0
- (int)processIdentifier;	// IMP=0x000000000000b75c
- (id)multipleInstancesUUID;	// IMP=0x000000000000b754
- (_Bool)multipleInstances;	// IMP=0x000000000000b74c
- (id)xpcServiceNameRoot;	// IMP=0x000000000000b6ab
- (id)identifier;	// IMP=0x000000000000b60a
- (_Bool)overridesHostAppearance;	// IMP=0x000000000000b602
- (id)initWithExtensionProcess:(id)arg1 contextToken:(id)arg2;	// IMP=0x000000000000b560

@end
