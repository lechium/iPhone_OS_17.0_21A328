//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCGameIntentXPCProxyClientEndpoint, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCGameIntentXPCProxyClientEndpointDescription : NSObject
{
    GCGameIntentXPCProxyClientEndpoint *_materializedObject;	// 8 = 0x8
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000003a40c
- (void).cxx_destruct;	// IMP=0x000000000003a861
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (id)materializeWithContext:(id)arg1;	// IMP=0x000000000003a576
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003a553
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003a4ac
- (id)init;	// IMP=0x000000000003a489
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000003a414

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
