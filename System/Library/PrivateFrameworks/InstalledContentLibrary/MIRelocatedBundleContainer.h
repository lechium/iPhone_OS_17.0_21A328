//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MIBundleContainer.h"

__attribute__((visibility("hidden")))
@interface MIRelocatedBundleContainer : MIBundleContainer
{
}

- (_Bool)shouldHaveCorrespondingDataContainer;	// IMP=0x000000000002535a
- (unsigned long long)diskUsage;	// IMP=0x00000000000252df
- (_Bool)regenerateDirectoryUUIDWithError:(id *)arg1;	// IMP=0x000000000002526f
- (_Bool)purgeContentWithError:(id *)arg1;	// IMP=0x00000000000251ff
- (_Bool)makeContainerLiveReplacingContainer:(id)arg1 reason:(unsigned long long)arg2 waitForDeletion:(_Bool)arg3 withError:(id *)arg4;	// IMP=0x000000000002518f
- (_Bool)makeContainerLiveWithError:(id *)arg1;	// IMP=0x000000000002511f

@end

