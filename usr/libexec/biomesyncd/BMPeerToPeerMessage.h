//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncDevicePeer, MISSING_TYPE;

@interface BMPeerToPeerMessage : NSObject
{
    BMSyncDevicePeer *_peer;	// 8 = 0x8
    MISSING_TYPE *_protocolVersion;	// 16 = 0x10
    double _walltime;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001e1c1
@property(nonatomic) double walltime; // @synthesize walltime=_walltime;
@property(nonatomic) unsigned long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) BMSyncDevicePeer *peer; // @synthesize peer=_peer;
- (id)dictionaryRepresentation;	// IMP=0x001000000001e049
- (id)initFromDictionary:(id)arg1;	// IMP=0x001000000001df0e

@end

