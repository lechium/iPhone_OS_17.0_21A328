//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSCloudKitMirroringResult.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSCloudKitMirroringAcceptShareInvitationsResult : NSCloudKitMirroringResult
{
    NSArray *_acceptedShares;	// 8 = 0x8
    NSArray *_acceptedShareMetadatas;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray *acceptedShareMetadatas; // @synthesize acceptedShareMetadatas=_acceptedShareMetadatas;
@property(retain, nonatomic) NSArray *acceptedShares; // @synthesize acceptedShares=_acceptedShares;
- (void)dealloc;	// IMP=0x00000000002573a1
- (id)initWithRequest:(id)arg1 storeIdentifier:(id)arg2 acceptedShares:(id)arg3 acceptedShareMetadatas:(id)arg4 error:(id)arg5;	// IMP=0x0000000000257211

@end
