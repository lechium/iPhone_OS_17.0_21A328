//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TCCDMDMPolicyOverride
{
}

+ (id)MDMOverridesFilePath;	// IMP=0x004000000005ec28
- (void)parsePlist;	// IMP=0x00400000000601b6
- (void)updateDatabase;	// IMP=0x0010000000060188
- (void)resetDatabaseFlagsForRecordsRemovedFromPreviousPolicy;	// IMP=0x001000000005fcaa
- (void)addOrUpdateRecordsForCurrentPolicy;	// IMP=0x001000000005f946
- (void)updateDatabaseForPolicyAuthorizationRecord:(id)arg1 service:(id)arg2;	// IMP=0x001000000005ee15
- (id)init;	// IMP=0x001000000005ec35

@end

