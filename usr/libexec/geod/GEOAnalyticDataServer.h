//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@interface GEOAnalyticDataServer : GEOServer
{
}

+ (id)identifier;	// IMP=0x0020000000017933
- (void)readReqRespMetadataWithMessage:(id)arg1;	// IMP=0x001000000004bab6
- (void)readNetEventDataWithMessage:(id)arg1;	// IMP=0x001000000004b948
- (id)initWithDaemon:(id)arg1;	// IMP=0x001000000004b919
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000017940

@end
