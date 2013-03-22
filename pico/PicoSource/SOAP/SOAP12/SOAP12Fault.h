// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class SOAP12Faultreason;
@class SOAP12Detail;
@class SOAP12Faultcode;

/**
 
     Fault reporting structure
   
 
*/
@interface SOAP12Fault : NSObject <PicoBindable> {

@private
    SOAP12Faultcode *_code;
    SOAP12Faultreason *_reason;
    NSString *_node;
    NSString *_role;
    SOAP12Detail *_detail;

}


/**
 (public property)
 
 type : class SOAP12Faultcode
*/
@property (nonatomic, retain) SOAP12Faultcode *code;

/**
 (public property)
 
 type : class SOAP12Faultreason
*/
@property (nonatomic, retain) SOAP12Faultreason *reason;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *node;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *role;

/**
 (public property)
 
 type : class SOAP12Detail
*/
@property (nonatomic, retain) SOAP12Detail *detail;


@end