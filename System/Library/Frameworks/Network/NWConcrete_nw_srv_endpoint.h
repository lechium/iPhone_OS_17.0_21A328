//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_srv_endpoint
{
    char *name;	// 232 = 0xe8
}

- (unsigned long long)getHash;	// IMP=0x000000000057f400
- (id)copyEndpoint;	// IMP=0x000000000057f3d0
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;	// IMP=0x000000000057f330
- (char *)createDescription:(_Bool)arg1;	// IMP=0x000000000057f230
- (const char *)domainForPolicy;	// IMP=0x000000000057f210
- (id)copyDictionary;	// IMP=0x000000000057f180
- (unsigned int)type;	// IMP=0x000000000057f170
- (void)dealloc;	// IMP=0x000000000057f110

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
