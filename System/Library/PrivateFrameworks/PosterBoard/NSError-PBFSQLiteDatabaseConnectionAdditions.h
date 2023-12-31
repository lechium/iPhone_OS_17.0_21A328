//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (PBFSQLiteDatabaseConnectionAdditions)
+ (id)pbf_sqliteDatabaseErrorWithCode:(int)arg1 errorMessage:(id)arg2;	// IMP=0x00600000000498ca
+ (id)pbf_generalErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00600000000db442
+ (id)pbf_dataStoreErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00600000000db41c
+ (id)pbf_extensionStoreCoordinatorErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00600000000db3f6
+ (id)pbf_descriptorStoreCoordinatorErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00600000000db3d0
- (_Bool)pbf_isGeneralCancelledError;	// IMP=0x00100000000db468
@end

