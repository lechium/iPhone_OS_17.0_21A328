//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSQuery.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface _LSAvailableApplicationsForURLQuery : _LSQuery
{
    NSURL *_URL;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000008a118
- (void).cxx_destruct;	// IMP=0x000000000008a27e
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008a1a3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008a120
- (_Bool)_requiresDatabaseMappingEntitlement;	// IMP=0x000000000008a110
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000897ce
- (void)yieldBundles:(const void *)arg1 context:(struct LSContext *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000896e9
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000089667

@end

