//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface SagaFavoriteEntityOperation
{
    long long _adamID;	// 8 = 0x8
    long long _persistentID;	// 16 = 0x10
    NSString *_globalPlaylistID;	// 24 = 0x18
    NSString *_albumCloudLibraryID;	// 32 = 0x20
    NSString *_artistCloudLibraryID;	// 40 = 0x28
    NSDate *_timeStamp;	// 48 = 0x30
    long long _entityType;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000003e127
- (void).cxx_destruct;	// IMP=0x002000000003be21
- (id)_containerPidsMatchingRequestGlobalPlaylistID;	// IMP=0x001000000003bc44
- (id)_trackPidsMatchingRequestStoreID;	// IMP=0x001000000003ba20
- (_Bool)_recomputeInUsersLibraryForTrackPids:(id)arg1 resetFavoriteState:(_Bool)arg2 usingConnection:(id)arg3;	// IMP=0x001000000003b85e
- (void)_revertFavoritingEntityTypeArtist;	// IMP=0x001000000003b6a0
- (void)_revertFavoritingEntityTypeAlbum;	// IMP=0x001000000003b4e2
- (void)_revertFavoritingEntityTypePlaylist;	// IMP=0x001000000003b0c2
- (void)_revertFavoritingEntityTypeTrack;	// IMP=0x001000000003af4c
- (void)_revertPendingFavoriteEntityForPermanentlyFailedOperation;	// IMP=0x001000000003ae08
- (void)_setCloudIDsFromResponse:(id)arg1;	// IMP=0x001000000003a531
- (unsigned int)_currentDatabaseRevision;	// IMP=0x000000000003a4e4
- (void)main;	// IMP=0x0010000000039a25
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000398f4
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000039737
- (id)_initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 persistentID:(long long)arg3 storeID:(long long)arg4 globalPlaylistID:(id)arg5 albumCloudLibraryID:(id)arg6 artistCloudLibraryID:(id)arg7 entityType:(long long)arg8 time:(id)arg9;	// IMP=0x00100000000395e1
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 persistentID:(long long)arg3 artistCloudLibraryID:(id)arg4 time:(id)arg5;	// IMP=0x00100000000395a5
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 persistentID:(long long)arg3 albumCloudLibraryID:(id)arg4 time:(id)arg5;	// IMP=0x0010000000039577
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 persistentID:(long long)arg3 globalPlaylistID:(id)arg4 time:(id)arg5;	// IMP=0x001000000003953b
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 persistentID:(long long)arg3 storeID:(long long)arg4 entityType:(long long)arg5 time:(id)arg6;	// IMP=0x0010000000039507

@end
