//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BRCServerChangesApplyUtil_Private : NSObject
{
}

+ (_Bool)localItemHasUnsyncedChanges:(id)arg1 si:(id)arg2 rank:(long long)arg3 scheduler:(id)arg4 clientZone:(id)arg5 zone:(id)arg6 isDeleteOfShareRoot:(_Bool)arg7 session:(id)arg8;	// IMP=0x008000000032d5f9
+ (_Bool)serverItemDeadWithNoLiveLocalItem:(id)arg1 si:(id)arg2 rank:(long long)arg3 scheduler:(id)arg4 clientZone:(id)arg5 zone:(id)arg6;	// IMP=0x008000000032d3c6
+ (_Bool)serverItemWouldBeParentedToDeadFolder:(id)arg1 si:(id)arg2 rank:(long long)arg3 scheduler:(id)arg4 zone:(id)arg5 diffs:(unsigned long long)arg6;	// IMP=0x008000000032cea1
+ (_Bool)_handleApplyingDeletedUnlistedDirectoryIfNecessary:(id)arg1 localItem:(id)arg2 parent:(id)arg3;	// IMP=0x008000000032cb22
+ (_Bool)appLibraryUndergoingCZM:(id)arg1 zone:(id)arg2 rank:(long long)arg3 parentID:(id)arg4 scheduler:(id)arg5 session:(id)arg6;	// IMP=0x008000000032c88c
+ (_Bool)itemUndergoingCZMToAnotherZone:(id)arg1 si:(id)arg2 clientZone:(id)arg3 rank:(long long)arg4 scheduler:(id)arg5 zone:(id)arg6;	// IMP=0x008000000032c65a

@end

