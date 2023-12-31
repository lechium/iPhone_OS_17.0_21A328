//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDCollectionSearchOperation
{
    _Bool _firstRun;	// 24 = 0x18
    _Bool _responseStatusPayloadFailed;	// 25 = 0x19
    int _searchType;	// 28 = 0x1c
}

- (id)createHandoutQueryRequest;	// IMP=0x0020000000053907
- (id)createCollectionQueryRequest;	// IMP=0x0010000000053721
- (id)logSubsystem;	// IMP=0x001000000005370d
- (_Bool)needsToMakeNetworkRequest;	// IMP=0x0010000000053705
- (_Bool)wantsToExecute;	// IMP=0x00100000000536b3
- (_Bool)allowMixedResponseStatusCode;	// IMP=0x00100000000536ab
- (void)execute;	// IMP=0x001000000005366f
- (_Bool)handleZoneRemoved:(id)arg1;	// IMP=0x0010000000053667
- (id)acceptContentType;	// IMP=0x001000000005365a
- (id)requestContentType;	// IMP=0x001000000005364d
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000052ec0
- (id)requestData;	// IMP=0x0010000000052e34
- (Class)expectedResponseClass;	// IMP=0x0010000000052e23
- (id)endpointIdentifier;	// IMP=0x0010000000052e16
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x0010000000052dfd
- (id)initForCollectionItemsWithDatabase:(id)arg1;	// IMP=0x0010000000052db0
- (id)initForCollectionsWithDatabase:(id)arg1;	// IMP=0x0010000000052d63
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000052d24

@end

