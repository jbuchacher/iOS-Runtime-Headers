/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSArray, NSString, UIFont;

@interface CKPhoneNumberCompressor : NSObject {
    float _desiredWidth;
    UIFont *_font;
    NSString *_phoneNumber;
    NSArray *_preferredCompressions;
}

@property float desiredWidth;
@property(retain) UIFont * font;
@property(copy) NSString * phoneNumber;
@property(copy) NSArray * preferredCompressions;

- (id)_compressPhoneNumberIfFitsInCompressionLevel:(int)arg1;
- (id)compress;
- (void)dealloc;
- (float)desiredWidth;
- (id)font;
- (id)phoneNumber;
- (id)preferredCompressions;
- (void)setDesiredWidth:(float)arg1;
- (void)setFont:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPreferredCompressions:(id)arg1;

@end