//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable;

@interface CPLCloudKitDownloadResourcesOperationContext
{
    NSMapTable *_resourceToProgressMap;	// 72 = 0x48
    unsigned long long _resourceType;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000c0a6e
@property(readonly, nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
- (id)extendedStatusDescriptionStrings;	// IMP=0x00100000000c036a
- (id)operationDescription;	// IMP=0x00100000000c02fe
- (void)recordCompletionForResource:(id)arg1 withError:(id)arg2;	// IMP=0x00100000000c02c6
- (void)updateProgress:(double)arg1 forResource:(id)arg2;	// IMP=0x00100000000c0236
- (void)addResource:(id)arg1;	// IMP=0x00100000000c01ab
- (id)initWithResourceType:(unsigned long long)arg1;	// IMP=0x00100000000c0167

@end
