/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, NSData;

@interface SSPlayInfoRequestContext : NSObject <SSCoding, NSCopying> {
    NSString *_playerGUID;
    NSData *_sic;
    NSArray *_sinfs;
}

@property(copy) NSString * playerGUID;
@property(copy) NSData * SICData;
@property(copy) NSArray * sinfs;


- (id)sinfs;
- (id)playerGUID;
- (id)SICData;
- (void*)copyXPCEncoding;
- (id)initWithXPCEncoding:(void*)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (void)setPlayerGUID:(id)arg1;
- (void)setSICData:(id)arg1;
- (void)setSinfs:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end