//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface _NTKDComplicationCollectionManifest : NSObject
{
    NSMutableSet *_clients;	// 8 = 0x8
    NSMutableDictionary *_clientToSampleTemplateFamilies;	// 16 = 0x10
    NSMutableDictionary *_clientToComplicationDescriptorIdentifiers;	// 24 = 0x18
}

+ (id)emptyManifest;	// IMP=0x004000000002e907
- (void).cxx_destruct;	// IMP=0x002000000002fcf9
- (void)writeToFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x001000000002f7d9
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x001000000002ed8e
- (_Bool)removeSampleTemplatesForKey:(id)arg1;	// IMP=0x001000000002ec22
- (void)setClientId:(id)arg1 supportForComplicationDescriptorIdentifiers:(id)arg2;	// IMP=0x001000000002eb6d
- (_Bool)addKey:(id)arg1 supportForSampleTemplateForFamily:(long long)arg2;	// IMP=0x001000000002ea24
- (id)complicationDescriptorIdentifiersForClientIdentifier:(id)arg1;	// IMP=0x001000000002ea0e
- (id)familiesWithSampleTemplateForKey:(id)arg1;	// IMP=0x001000000002e9f8
- (id)clientIds;	// IMP=0x001000000002e9e2
- (id)init;	// IMP=0x001000000002e921

@end
