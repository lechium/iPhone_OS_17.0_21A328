//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDCommandPayloadMetadata
{
}

+ (id)fetchRequestForCommandsPendingDeleteFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x004000000002c66d
+ (id)fetchRequestForCommandsPendingRemovalFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x001000000002c501
+ (id)fetchRequestForCommandsPendingExecutionFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x001000000002c396
+ (id)fetchRequestForCommandsFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x001000000002c382
+ (id)fetchRequestForCommandsFromOrganizationWithIdentifier:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x001000000002c257
+ (id)commandsWithPayloadDictionaries:(id)arg1 organizationIdentifier:(id)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x001000000002bdfb

@end

