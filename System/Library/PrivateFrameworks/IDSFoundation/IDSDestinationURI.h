//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IDSDestination.h"

@class IDSURI;

@interface IDSDestinationURI : IDSDestination
{
    IDSURI *_uri;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000ea339
- (void).cxx_destruct;	// IMP=0x00000000000ea7c6
@property(readonly, nonatomic) IDSURI *uri; // @synthesize uri=_uri;
- (id)description;	// IMP=0x00000000000ea72d
- (id)destinationLightweightStatus;	// IMP=0x00000000000ea663
- (id)destinationURIs;	// IMP=0x00000000000ea5ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ea5c3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ea553
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ea47a
- (id)initWithURIString:(id)arg1;	// IMP=0x00000000000ea3af
- (id)initWithURI:(id)arg1;	// IMP=0x00000000000ea341

@end

