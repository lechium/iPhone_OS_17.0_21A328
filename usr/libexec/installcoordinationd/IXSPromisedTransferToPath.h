//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IXPromisedTransferToPathSeed;

@interface IXSPromisedTransferToPath
{
}

- (oneway void)_remote_setTryDeltaCopy:(_Bool)arg1;	// IMP=0x001000000003337d
- (oneway void)_remote_setShouldCopy:(_Bool)arg1;	// IMP=0x0010000000033268
- (oneway void)_remote_setTransferPath:(id)arg1;	// IMP=0x0010000000033124

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: clientSeed
// Property attributes: (null)

@property(retain, nonatomic) IXPromisedTransferToPathSeed *seed; // @dynamic seed;

@end

